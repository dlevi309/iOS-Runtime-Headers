/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSMutableArray, ML3DatabaseConnection, ML3MusicLibrary;

@interface ML3EntityReplacer : NSObject {

	CFDictionaryRef _propertyToIndexPair;
	NSMutableArray* _naturalStatements;
	ML3DatabaseConnection* _connection;
	ML3MusicLibrary* _library;

}

@property (getter=isOpen,nonatomic,readonly) BOOL open; 
-(void)dealloc;
-(void)close;
-(BOOL)isOpen;
-(BOOL)perform;
-(void)clearBindings;
-(void)bindValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithEntityClass:(Class)arg1 properties:(id)arg2 library:(id)arg3 ;
-(void)bindNullForProperty:(id)arg1 ;
-(void)bindInt:(int)arg1 forProperty:(id)arg2 ;
-(void)bindDouble:(double)arg1 forProperty:(id)arg2 ;
-(void)bindPersistentID:(long long)arg1 ;
@end

