/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSDictionary *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)semantic;
-(void)setSemantic:(NSString *)arg1 ;
@end

