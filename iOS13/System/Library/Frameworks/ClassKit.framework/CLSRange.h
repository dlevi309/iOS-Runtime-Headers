/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSRange : CLSObject <CLSRelationable> {

	double _start;
	double _end;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double start;                             //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double end;                               //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) double delta; 
@property (nonatomic,readonly) NSString * parentObjectID; 
+(BOOL)supportsSecureCoding;
+(id)relations;
+(id)compressOverlappingRanges:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(double)start;
-(id)dictionaryRepresentation;
-(id)initWithRange:(id)arg1 ;
-(double)end;
-(void)setStart:(double)arg1 ;
-(void)setEnd:(double)arg1 ;
-(double)delta;
-(id)initWithStart:(double)arg1 end:(double)arg2 ;
-(BOOL)overlapsWith:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(void)mergeWithRange:(id)arg1 ;
@end

