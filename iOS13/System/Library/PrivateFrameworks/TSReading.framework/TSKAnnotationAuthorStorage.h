/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPObject.h>

@class NSMutableSet, NSSet;

@interface TSKAnnotationAuthorStorage : TSPObject {

	NSMutableSet* mAuthors;

}

@property (nonatomic,readonly) NSSet * authors; 
-(void)dealloc;
-(id)description;
-(NSSet *)authors;
-(id)packageLocator;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg1 ;
-(void)p_addAuthor:(id)arg1 isFromDocumentSupport:(BOOL)arg2 ;
-(id)authorWithName:(id)arg1 ;
-(void)addAuthor:(id)arg1 ;
-(void)removeAuthor:(id)arg1 ;
-(id)nextAuthorColor;
-(void)didAddAuthorRelationshipToDocument;
-(void)didRemoveAuthorRelationshipFromDocument;
@end

