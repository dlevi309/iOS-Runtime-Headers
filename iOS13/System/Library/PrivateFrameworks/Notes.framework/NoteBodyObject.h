/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICSearchIndexableTarget.h>

@class NSString, NoteObject, NSData;

@interface NoteBodyObject : NSManagedObject <ICSearchIndexableTarget>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * content; 
@property (nonatomic,readonly) NSString * contentAsPlainText; 
@property (nonatomic,retain) NoteObject * owner; 
@property (nonatomic,retain) NSData * externalRepresentation; 
@property (nonatomic,retain) NSString * externalContentRef; 
-(NSString *)contentAsPlainText;
-(id)contentAsPlainTextPreservingNewlines;
-(id)targetSearchIndexable;
@end

