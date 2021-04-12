/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@class NSString, NSDictionary;

@interface WFAssociationContext : NSObject {

	BOOL _secondaryScanCompleted;
	unsigned long long _state;
	unsigned long long _originator;
	NSString* _sectionNameJoined;
	NSDictionary* _sectionCounts;

}

@property (assign,nonatomic) unsigned long long state;                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long originator;                   //@synthesize originator=_originator - In the implementation block
@property (nonatomic,readonly) NSString * stateDescription; 
@property (nonatomic,readonly) NSString * originatorDescription; 
@property (assign,nonatomic) BOOL secondaryScanCompleted;                     //@synthesize secondaryScanCompleted=_secondaryScanCompleted - In the implementation block
@property (nonatomic,copy) NSString * sectionNameJoined;                      //@synthesize sectionNameJoined=_sectionNameJoined - In the implementation block
@property (nonatomic,copy) NSDictionary * sectionCounts;                      //@synthesize sectionCounts=_sectionCounts - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)stateDescription;
-(void)setOriginator:(unsigned long long)arg1 ;
-(unsigned long long)originator;
-(BOOL)secondaryScanCompleted;
-(NSDictionary *)sectionCounts;
-(NSString *)sectionNameJoined;
-(void)setSectionNameJoined:(NSString *)arg1 ;
-(void)setSectionCounts:(NSDictionary *)arg1 ;
-(void)setSecondaryScanCompleted:(BOOL)arg1 ;
-(NSString *)originatorDescription;
@end

