/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface IKStyleMediaQuery : NSObject <NSCopying> {

	NSString* _identifier;
	BOOL _isNegated;
	NSString* _mediaType;
	NSDictionary* _featureValues;

}

@property (nonatomic,readonly) BOOL isNegated;                                   //@synthesize isNegated=_isNegated - In the implementation block
@property (nonatomic,retain,readonly) NSString * mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * featureValues;              //@synthesize featureValues=_featureValues - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
+(id)mediaQueryListWithCSSMediaQuery:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)mediaType;
-(NSDictionary *)featureValues;
-(id)initWithMediaType:(id)arg1 featureValues:(id)arg2 isNegated:(BOOL)arg3 ;
-(BOOL)isNegated;
@end

