/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/


@class NSString, NSArray;

@interface NSSExternalAnalyticsPaneldentifierProvider : NSObject {

	NSString* _panelIdentifier;
	NSArray* _hostNames;

}

@property (nonatomic,copy,readonly) NSArray * hostNames;                //@synthesize hostNames=_hostNames - In the implementation block
@property (nonatomic,readonly) NSString * panelIdentifier;              //@synthesize panelIdentifier=_panelIdentifier - In the implementation block
-(id)panelIdentifierWithHostNames:(id)arg1 ;
-(id)initWithHostNames:(id)arg1 ;
-(NSString *)panelIdentifier;
-(NSArray *)hostNames;
@end

