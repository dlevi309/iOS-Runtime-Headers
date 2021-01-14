/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding> {

	NSString* _semantic;
	NSDictionary* _options;

}

@property (nonatomic,copy) NSString * semantic;                   //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)infoWithSemantic:(id)arg1 options:(id)arg2 ;
-(NSString *)semantic;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSemantic:(NSString *)arg1 ;
-(void)dealloc;
@end

