/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSString, NSArray;

@interface TSKWarning : NSObject {

	NSString* mMessage;
	NSArray* mInfos;
	unsigned mKind;
	int mSeverity;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSArray * infos; 
@property (nonatomic,readonly) unsigned kind; 
@property (nonatomic,readonly) int severity; 
+(id)warningWithMessage:(id)arg1 kind:(unsigned)arg2 severity:(int)arg3 infos:(id)arg4 ;
+(id)warningWithMessage:(id)arg1 kind:(unsigned)arg2 infos:(id)arg3 ;
+(id)warningWithMessage:(id)arg1 severity:(int)arg2 ;
+(id)warningWithMessage:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)kind;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)infos;
-(void)setInfos:(NSArray *)arg1 ;
-(int)severity;
-(id)initWithMessage:(id)arg1 kind:(unsigned)arg2 severity:(int)arg3 infos:(id)arg4 ;
@end

