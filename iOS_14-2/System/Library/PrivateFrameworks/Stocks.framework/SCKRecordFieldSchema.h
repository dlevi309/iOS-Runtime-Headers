/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithName:(id)arg1 valueClass:(Class)arg2 required:(BOOL)arg3 encrypted:(BOOL)arg4 ;
-(Class)valueClass;
-(void)setRequired:(BOOL)arg1 ;
-(BOOL)isRequired;
-(NSString *)name;
-(BOOL)isValidRecord:(id)arg1 ;
-(BOOL)isEncrypted;
-(void)setValueClass:(Class)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

