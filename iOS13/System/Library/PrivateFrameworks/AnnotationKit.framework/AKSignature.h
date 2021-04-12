/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKDrawing, NSUUID, NSDate;

@interface AKSignature : NSObject <NSSecureCoding> {

	PKDrawing* _drawing;
	CGPathRef _path;
	CGRect _strokesBounds;
	BOOL _shouldPersist;
	NSUUID* _uniqueID;
	double _baselineOffset;
	NSDate* _creationDate;

}

@property (retain) NSUUID * uniqueID;                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) double baselineOffset;              //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign) BOOL shouldPersist;                 //@synthesize shouldPersist=_shouldPersist - In the implementation block
@property (readonly) CGPathRef path; 
@property (readonly) CGRect pathBounds; 
@property (readonly) PKDrawing * drawing; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPathRef)path;
-(void)setPath:(CGPathRef)arg1 ;
-(NSUUID *)uniqueID;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(void)setUniqueID:(NSUUID *)arg1 ;
-(id)initWithDrawing:(id)arg1 path:(CGPathRef)arg2 baselineOffset:(double)arg3 creationDate:(id)arg4 ;
-(id)initWithDrawing:(id)arg1 path:(CGPathRef)arg2 baselineOffset:(double)arg3 ;
-(BOOL)shouldPersist;
-(PKDrawing *)drawing;
-(void)setShouldPersist:(BOOL)arg1 ;
-(id)initForTesting;
-(CGRect)pathBounds;
@end

