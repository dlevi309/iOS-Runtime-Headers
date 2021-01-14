/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSURL, NSString, SKNode;

@interface SKReferenceNode : SKNode {

	NSURL* _referenceURL;
	NSString* _referenceFileName;
	SKNode* _resolvedNode;
	BOOL _hasResolvedURL;

}

@property (nonatomic,retain) NSString * referenceFileName; 
@property (nonatomic,retain) NSURL * referenceURL; 
+(BOOL)supportsSecureCoding;
+(id)referenceNodeWithURL:(id)arg1 ;
+(id)referenceNodeWithFileNamed:(id)arg1 ;
+(id)nodeWithFileNamed:(id)arg1 ;
-(NSURL *)referenceURL;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFileNamed:(id)arg1 ;
-(void)setReferenceURL:(NSURL *)arg1 ;
-(void)setReferenceFileName:(NSString *)arg1 ;
-(NSString *)referenceFileName;
-(void)resolveReferenceNode;
-(void)didLoadReferenceNode:(id)arg1 ;
-(id)_resolveReferenceNode;
-(void)resolveNodeFromArchiveData:(id)arg1 ;
-(id)resolvedNode;
@end

