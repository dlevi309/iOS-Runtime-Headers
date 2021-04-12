/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICSQLiteBinding.h>

@class ICSQLiteConnection, NSDictionary, NSString;

@interface ICSQLiteStatement : NSObject <ICSQLiteBinding> {

	ICSQLiteConnection* _connection;
	sqlite3_stmtRef _statement;
	ICSQLiteStatement* _strongSelf;

}

@property (nonatomic,readonly) ICSQLiteConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef sqlite3_stmt;                       //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * columnIndexByName; 
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly; 
@property (nonatomic,copy,readonly) NSString * SQL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)SQL;
-(BOOL)isReadOnly;
-(int)clearBindings;
-(void)bindData:(id)arg1 atPosition:(int)arg2 ;
-(void)bindFloat:(float)arg1 atPosition:(int)arg2 ;
-(sqlite3_stmtRef)sqlite3_stmt;
-(int)finalizeStatement;
-(void)bindNullAtPosition:(int)arg1 ;
-(void)bindInt64:(long long)arg1 atPosition:(int)arg2 ;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2 ;
-(ICSQLiteConnection *)connection;
-(void)bindDouble:(double)arg1 atPosition:(int)arg2 ;
-(void)bindNumber:(id)arg1 atPosition:(int)arg2 ;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2 ;
-(int)step;
-(int)reset;
-(NSDictionary *)columnIndexByName;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 connection:(id)arg2 ;
-(void)bindString:(id)arg1 atPosition:(int)arg2 ;
-(void)bindInt:(int)arg1 atPosition:(int)arg2 ;
@end

