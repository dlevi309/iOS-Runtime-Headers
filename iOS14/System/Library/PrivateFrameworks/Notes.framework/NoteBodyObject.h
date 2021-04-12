/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

