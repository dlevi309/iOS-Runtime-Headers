/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSHashTable;

@interface _HDAssertionRecord : NSObject {

	NSString* _assertionIdentifier;
	NSHashTable* _assertions;

}

@property (nonatomic,copy,readonly) NSString * assertionIdentifier;              //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,readonly) NSHashTable * assertions;                         //@synthesize assertions=_assertions - In the implementation block
-(NSHashTable *)assertions;
-(NSString *)assertionIdentifier;
-(id)initWithAssertionIdentifier:(id)arg1 ;
@end

