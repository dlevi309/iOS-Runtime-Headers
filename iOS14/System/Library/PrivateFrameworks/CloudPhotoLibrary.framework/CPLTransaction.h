/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSString;

@interface CPLTransaction : NSObject {

	BOOL _dirty;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(unsigned long long)transactionCount;
+(id)transactions;
+(void)endTransactionWithIdentifier:(id)arg1 ;
+(void)beginTransactionWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(BOOL)arg3 ;
+(id)newTransactionWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(BOOL)arg3 ;
-(void)endTransaction;
-(NSString *)identifier;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(BOOL)arg3 ;
@end

