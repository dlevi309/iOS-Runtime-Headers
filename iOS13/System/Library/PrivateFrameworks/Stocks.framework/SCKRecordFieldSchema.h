/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSString;

@interface SCKRecordFieldSchema : NSObject {

	BOOL _encrypted;
	BOOL _required;
	NSString* _name;
	Class _valueClass;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) Class valueClass;                                 //@synthesize valueClass=_valueClass - In the implementation block
@property (assign,getter=isRequired,nonatomic) BOOL required;                  //@synthesize required=_required - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted;              //@synthesize encrypted=_encrypted - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(Class)valueClass;
-(void)setValueClass:(Class)arg1 ;
-(BOOL)isEncrypted;
-(void)setRequired:(BOOL)arg1 ;
-(BOOL)isRequired;
-(id)initWithName:(id)arg1 valueClass:(Class)arg2 required:(BOOL)arg3 encrypted:(BOOL)arg4 ;
-(BOOL)isValidRecord:(id)arg1 ;
@end

