/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString;

@interface WBSContentBlockerStatisticsFirstParty : NSObject {

	NSString* _domain;
	double _lastSeen;

}

@property (nonatomic,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) double lastSeen;                //@synthesize lastSeen=_lastSeen - In the implementation block
-(double)lastSeen;
-(NSString *)domain;
-(id)initWithDomain:(id)arg1 lastSeen:(double)arg2 ;
@end

