/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

