/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSString;

@interface AXAssertionWorkItem : NSObject {

	BOOL _acquire;
	NSString* _type;
	NSString* _identifier;
	unsigned long long _retries;

}

@property (nonatomic,readonly) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL acquire;                          //@synthesize acquire=_acquire - In the implementation block
@property (assign,nonatomic) unsigned long long retries;              //@synthesize retries=_retries - In the implementation block
-(NSString *)type;
-(NSString *)identifier;
-(BOOL)acquire;
-(unsigned long long)retries;
-(void)setRetries:(unsigned long long)arg1 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(BOOL)arg3 ;
@end

