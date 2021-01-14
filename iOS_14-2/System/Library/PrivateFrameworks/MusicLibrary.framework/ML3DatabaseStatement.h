/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString;

@interface ML3DatabaseStatement : NSObject {

	NSString* _sql;
	BOOL _clearBindingsAfterRunning;
	BOOL _isExecuting;
	sqlite3_stmtRef _sqliteStatement;

}

@property (nonatomic,readonly) NSString * sql; 
@property (nonatomic,readonly) sqlite3_stmtRef sqliteStatement;              //@synthesize sqliteStatement=_sqliteStatement - In the implementation block
@property (assign,nonatomic) BOOL clearBindingsAfterRunning;                 //@synthesize clearBindingsAfterRunning=_clearBindingsAfterRunning - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                               //@synthesize isExecuting=_isExecuting - In the implementation block
-(NSString *)sql;
-(BOOL)isBusy;
-(BOOL)isReadOnly;
-(void)bindUTF8StringNoCopy:(const char*)arg1 forParameterAtPosition:(int)arg2 ;
-(int)clearBindings;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 SQL:(id)arg2 ;
-(int)finalizeStatement;
-(void)bindUTF8String:(const char*)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindDouble:(double)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindValuesInArray:(id)arg1 ;
-(void)bindUTF8StringNoCopy:(const char*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)bindValuesForParameterNames:(id)arg1 ;
-(void)bindNullForParameterAtPosition:(int)arg1 ;
-(id)description;
-(void)bindInt64:(long long)arg1 forParameterAtPosition:(int)arg2 ;
-(int)step;
-(void)bindInt:(int)arg1 forParameterAtPosition:(int)arg2 ;
-(void)setClearBindingsAfterRunning:(BOOL)arg1 ;
-(int)reset;
-(BOOL)isExecuting;
-(void)bindBytes:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)bindValue:(id)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindBytesNoCopy:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(BOOL)clearBindingsAfterRunning;
-(void)dealloc;
-(sqlite3_stmtRef)sqliteStatement;
@end

