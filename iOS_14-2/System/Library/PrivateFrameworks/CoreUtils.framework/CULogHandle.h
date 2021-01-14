/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSString;

@interface CULogHandle : NSObject {

	NSString* _categoryName;
	LogCategory* _ucatPtr;
	NSString* _label;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 logLevel:(int)arg3 logFlags:(unsigned)arg4 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 logLevel:(int)arg3 ;
-(void)ulog:(int)arg1 message:(id)arg2 ;
-(void)ulogf:(int)arg1 format:(id)arg2 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 logFlags:(unsigned)arg3 ;
-(void)ulogv:(int)arg1 format:(id)arg2 args:(char*)arg3 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)dealloc;
@end

