/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray, NSData;

@interface STVersionVector : NSObject <NSCopying> {

	NSMutableDictionary* _nodeByIdentifier;
	NSString* _editorIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * nodeByIdentifier;              //@synthesize nodeByIdentifier=_nodeByIdentifier - In the implementation block
@property (nonatomic,copy) NSString * editorIdentifier;                           //@synthesize editorIdentifier=_editorIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * nodes; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSArray *)nodes;
-(id)initWithNode:(id)arg1 ;
-(void)join:(id)arg1 ;
-(unsigned long long)evaluateCausality:(id)arg1 ;
-(void)setEditorIdentifier:(NSString *)arg1 ;
-(NSString *)editorIdentifier;
-(NSMutableDictionary *)nodeByIdentifier;
-(void)incrementNodeWithIdentifier:(id)arg1 ;
-(BOOL)precedesVersionVector:(id)arg1 ;
-(BOOL)isConcurrentWithVersionVector:(id)arg1 ;
-(BOOL)isEqualToVersionVector:(id)arg1 ;
-(void)setNodeByIdentifier:(NSMutableDictionary *)arg1 ;
@end

