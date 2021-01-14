/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <KnowledgeGraphKit/KGElementIdentifierSet.h>

@interface KGMutableElementIdentifierSet : KGElementIdentifierSet
-(id)copy;
-(void)addIdentifier:(unsigned long long)arg1 ;
-(void)removeAllIdentifiers;
-(void)removeIdentifier:(unsigned long long)arg1 ;
-(Bitmap*)mutableBitmap;
-(void)unionWithIdentifierSet:(id)arg1 ;
-(void)intersectWithIdentifierSet:(id)arg1 ;
-(void)subtractIdentifierSet:(id)arg1 ;
@end

