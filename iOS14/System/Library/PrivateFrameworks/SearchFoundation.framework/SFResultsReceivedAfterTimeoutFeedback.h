/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SFResultsReceivedAfterTimeoutFeedback : SFFeedback <NSCopying> {

	NSArray* _results;

}

@property (nonatomic,copy) NSArray * results;              //@synthesize results=_results - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

