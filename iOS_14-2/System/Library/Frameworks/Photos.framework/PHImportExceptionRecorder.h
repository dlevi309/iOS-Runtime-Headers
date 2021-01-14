/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHImportExceptionRecorder.h>
@class NSMutableArray;


@protocol PHImportExceptionRecorder <NSObject>
@property (nonatomic,readonly) NSMutableArray * exceptions; 
@required
-(id)addExceptionWithType:(long long)arg1 path:(id)arg2 underlyingError:(id)arg3 file:(char*)arg4 line:(unsigned long long)arg5;
-(void)addException:(id)arg1;
-(void)addExceptions:(id)arg1;
-(id)logForExceptions;
-(NSMutableArray *)exceptions;

@end


@class NSMutableArray, NSString;

@interface PHImportExceptionRecorder : NSObject <PHImportExceptionRecorder> {

	NSMutableArray* _exceptions;

}

@property (nonatomic,readonly) NSMutableArray * exceptions;              //@synthesize exceptions=_exceptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)addExceptionWithType:(long long)arg1 path:(id)arg2 underlyingError:(id)arg3 file:(char*)arg4 line:(unsigned long long)arg5 ;
-(void)addException:(id)arg1 ;
-(void)addExceptions:(id)arg1 ;
-(id)logForExceptions;
-(NSMutableArray *)exceptions;
-(void)logErrors;
@end

