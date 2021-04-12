/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clearBindings;
-(BOOL)isOpen;
-(void)close;
-(BOOL)perform;
-(void)dealloc;
-(void)bindValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithEntityClass:(Class)arg1 properties:(id)arg2 library:(id)arg3 ;
-(void)bindNullForProperty:(id)arg1 ;
-(void)bindInt:(int)arg1 forProperty:(id)arg2 ;
-(void)bindDouble:(double)arg1 forProperty:(id)arg2 ;
-(void)bindPersistentID:(long long)arg1 ;
@end

