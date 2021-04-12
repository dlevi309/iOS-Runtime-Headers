/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHImportExceptionRecorder.h>
@class NSMutableArray;


@protocol PHImportExceptionRecorder <NSObject>
@property (nonatomic,readonly) NSMutableArray * exceptions; 
@property (nonatomic,readonly) NSMutableArray * terminalExceptions; 
@property (nonatomic,readonly) NSMutableArray * criticalExceptions; 
@property (assign,nonatomic) BOOL hasTerminalException; 
@required
-(id)addExceptionWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char*)arg5 line:(unsigned long long)arg6;
-(void)addException:(id)arg1;
-(void)addExceptions:(id)arg1;
-(id)logForExceptionsOfImportance:(unsigned long long)arg1;
-(id)logForExceptionsOfMinImportance:(unsigned long long)arg1;
-(id)exceptionsOfImportance:(unsigned long long)arg1;
-(id)exceptionsWithMinimumImportance:(unsigned long long)arg1;
-(NSMutableArray *)exceptions;
-(NSMutableArray *)terminalExceptions;
-(NSMutableArray *)criticalExceptions;
-(BOOL)hasTerminalException;
-(void)setHasTerminalException:(BOOL)arg1;

@end


@class NSMutableArray, NSString;

@interface PHImportExceptionRecorder : NSObject <PHImportExceptionRecorder> {

	BOOL _hasTerminalException;
	NSMutableArray* _exceptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableArray * exceptions;                      //@synthesize exceptions=_exceptions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * terminalExceptions; 
@property (nonatomic,readonly) NSMutableArray * criticalExceptions; 
@property (assign,nonatomic) BOOL hasTerminalException;                          //@synthesize hasTerminalException=_hasTerminalException - In the implementation block
-(id)init;
-(id)addExceptionWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char*)arg5 line:(unsigned long long)arg6 ;
-(void)addException:(id)arg1 ;
-(void)addExceptions:(id)arg1 ;
-(id)logForExceptionsOfImportance:(unsigned long long)arg1 ;
-(id)logForExceptionsOfMinImportance:(unsigned long long)arg1 ;
-(id)exceptionsOfImportance:(unsigned long long)arg1 ;
-(id)exceptionsWithMinimumImportance:(unsigned long long)arg1 ;
-(NSMutableArray *)exceptions;
-(NSMutableArray *)terminalExceptions;
-(NSMutableArray *)criticalExceptions;
-(BOOL)hasTerminalException;
-(void)setHasTerminalException:(BOOL)arg1 ;
-(void)logErrors:(unsigned long long)arg1 ;
@end

