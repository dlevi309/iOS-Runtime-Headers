/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString;

@interface CRKBLBookItem : NSObject {

	NSString* _title;
	NSString* _author;
	NSString* _path;
	NSString* _storeIdentifier;
	NSString* _identifier;
	NSString* _legacyUniqueIdentifier;
	long long _type;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * author;                              //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * path;                                //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                     //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * legacyUniqueIdentifier;              //@synthesize legacyUniqueIdentifier=_legacyUniqueIdentifier - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setType:(long long)arg1 ;
-(id)description;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSString *)legacyUniqueIdentifier;
-(long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setLegacyUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(NSString *)title;
@end

