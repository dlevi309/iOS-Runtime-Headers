/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>
#import <libobjc.A.dylib/FCOperationIdentifying.h>
#import <libobjc.A.dylib/FCOperationPrioritizing.h>

@class NSString;

@interface FCPseudoOperation : NSObject <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing> {

	long long _relativePriority;
	/*^block*/id _cancelBlock;
	NSString* _shortOperationDescription;
	NSString* _longOperationDescription;
	/*^block*/id _priorityBlock;

}

@property (nonatomic,copy) id cancelBlock;                                    //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,copy) NSString * shortOperationDescription;              //@synthesize shortOperationDescription=_shortOperationDescription - In the implementation block
@property (nonatomic,copy) NSString * longOperationDescription;               //@synthesize longOperationDescription=_longOperationDescription - In the implementation block
@property (nonatomic,copy) id priorityBlock;                                  //@synthesize priorityBlock=_priorityBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long relativePriority;                      //@synthesize relativePriority=_relativePriority - In the implementation block
-(id)init;
-(id)initWithCancelBlock:(/*^block*/id)arg1 priorityBlock:(/*^block*/id)arg2 shortDescription:(id)arg3 longDescription:(id)arg4 ;
-(void)setShortOperationDescription:(NSString *)arg1 ;
-(id)priorityBlock;
-(void)setRelativePriority:(long long)arg1 ;
-(NSString *)longOperationDescription;
-(long long)relativePriority;
-(id)initWithCancelBlock:(/*^block*/id)arg1 priorityBlock:(/*^block*/id)arg2 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(void)setPriorityBlock:(id)arg1 ;
-(void)setLongOperationDescription:(NSString *)arg1 ;
-(void)cancel;
-(NSString *)shortOperationDescription;
@end

