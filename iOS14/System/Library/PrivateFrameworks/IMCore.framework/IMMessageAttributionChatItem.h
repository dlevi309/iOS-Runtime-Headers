/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMMessageStatusChatItem.h>

@class NSDictionary, NSString;

@interface IMMessageAttributionChatItem : IMMessageStatusChatItem {

	BOOL _showsLearnMoreLink;
	NSDictionary* _attributionInfo;
	long long _attributionType;

}

@property (nonatomic,copy,readonly) NSDictionary * attributionInfo;              //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (nonatomic,readonly) long long attributionType;                        //@synthesize attributionType=_attributionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,readonly) BOOL showsLearnMoreLink;                          //@synthesize showsLearnMoreLink=_showsLearnMoreLink - In the implementation block
-(long long)attributionType;
-(BOOL)showsLearnMoreLink;
-(NSDictionary *)attributionInfo;
-(NSString *)bundleID;
-(id)_initWithItem:(id)arg1 attributionInfo:(id)arg2 attributionType:(long long)arg3 showsLearnMoreLink:(BOOL)arg4 ;
@end

