/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSUUID, NSString;

@interface MSVXPCTransaction : NSObject {

	NSUUID* _identifier;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(id)activeTransactions;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)_identifier;
-(id)initWithName:(id)arg1 ;
-(BOOL)isActive;
-(void)beginTransaction;
-(void)endTransaction;
-(void)endTransactionOnDate:(id)arg1 ;
@end

