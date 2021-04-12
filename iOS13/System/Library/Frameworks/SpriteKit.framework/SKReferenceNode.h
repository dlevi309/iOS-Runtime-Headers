/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)referenceURL;
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

