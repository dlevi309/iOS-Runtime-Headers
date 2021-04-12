/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNInhibitor.h>

@protocol CNInhibitor <NSObject>
@required
-(void)stop;
-(void)start;

@end


@class NSString;

@interface CNInhibitor : NSObject <CNInhibitor> {

	BOOL _debugIsInhibiting;

}

@property (assign,nonatomic) BOOL debugIsInhibiting;                //@synthesize debugIsInhibiting=_debugIsInhibiting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suddenTerminationInhibitor;
+(id)suddenTerminationInhibitorWithProcessInfo:(id)arg1 ;
+(id)os_transactionInhibitorWithLabel:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setDebugIsInhibiting:(BOOL)arg1 ;
-(BOOL)debugIsInhibiting;
@end

