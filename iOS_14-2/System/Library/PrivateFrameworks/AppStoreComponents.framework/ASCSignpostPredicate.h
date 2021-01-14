/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSArray;

@interface ASCSignpostPredicate : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _tags;
	NSArray* _dateRanges;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy,readonly) NSSet * tags;                      //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dateRanges;              //@synthesize dateRanges=_dateRanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)tags;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)dateRanges;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSpans:(id)arg1 ;
-(id)initWithTags:(id)arg1 dateRanges:(id)arg2 ;
-(id)predicateByAddingTag:(unsigned long long)arg1 ;
-(id)predicateByAddingDateRange:(id)arg1 ;
@end

