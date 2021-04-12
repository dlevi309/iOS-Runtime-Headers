/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)bundleID;
-(long long)attributionType;
-(NSDictionary *)attributionInfo;
-(BOOL)showsLearnMoreLink;
-(id)_initWithItem:(id)arg1 attributionInfo:(id)arg2 attributionType:(long long)arg3 showsLearnMoreLink:(BOOL)arg4 ;
@end

