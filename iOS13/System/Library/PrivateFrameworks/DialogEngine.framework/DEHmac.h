/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@interface DEHmac : NSObject {

	SCD_Struct_DE2 _context;

}

@property (assign,nonatomic) SCD_Struct_DE2 context;              //@synthesize context=_context - In the implementation block
+(BOOL)verify:(id)arg1 computed:(id)arg2 ;
-(id)finalize;
-(SCD_Struct_DE2)context;
-(void)setContext:(SCD_Struct_DE2)arg1 ;
-(void)write:(id)arg1 ;
-(id)initWithkey:(id)arg1 iv:(id)arg2 ;
@end

