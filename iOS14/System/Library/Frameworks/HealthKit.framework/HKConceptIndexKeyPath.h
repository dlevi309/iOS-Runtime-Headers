/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSString;

@interface HKConceptIndexKeyPath : NSObject {

	NSString* _fullKeyPath;
	NSRange _range;

}

@property (nonatomic,copy,readonly) NSString * fullKeyPath;              //@synthesize fullKeyPath=_fullKeyPath - In the implementation block
@property (nonatomic,readonly) NSRange range;                            //@synthesize range=_range - In the implementation block
+(id)conceptIndexKeyPathWithFullKeyPath:(id)arg1 error:(id*)arg2 ;
-(id)tail;
-(id)init;
-(NSRange)range;
-(id)head;
-(NSString *)fullKeyPath;
-(id)initWithFullKeyPath:(id)arg1 range:(NSRange)arg2 ;
@end

