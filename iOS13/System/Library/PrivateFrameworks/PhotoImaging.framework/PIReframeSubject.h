/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PIReframeSubject : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	long long _identifier;
	double _confidence;
	long long _source;
	long long _edgeBleed;
	CGRect _bounds;
	CGRect _expandedBounds;

}

@property (nonatomic,readonly) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) double confidence;                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) long long source;                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) CGRect bounds;                       //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGRect expandedBounds;               //@synthesize expandedBounds=_expandedBounds - In the implementation block
@property (assign,nonatomic) long long edgeBleed;                 //@synthesize edgeBleed=_edgeBleed - In the implementation block
@property (nonatomic,readonly) BOOL isHuman; 
@property (nonatomic,readonly) BOOL isAnimal; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)identifier;
-(long long)source;
-(double)confidence;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithType:(long long)arg1 source:(long long)arg2 identifier:(long long)arg3 confidence:(double)arg4 ;
-(BOOL)isHuman;
-(BOOL)isAnimal;
-(CGRect)expandedBounds;
-(void)setExpandedBounds:(CGRect)arg1 ;
-(long long)edgeBleed;
-(void)setEdgeBleed:(long long)arg1 ;
@end

