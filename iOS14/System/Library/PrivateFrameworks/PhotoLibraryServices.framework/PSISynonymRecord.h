/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PSISynonymRecord : NSObject {

	short _category;
	NSString* _synonym;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * synonym;                 //@synthesize synonym=_synonym - In the implementation block
@property (assign,nonatomic) short category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setCategory:(short)arg1 ;
-(NSString *)synonym;
-(void)setSynonym:(NSString *)arg1 ;
-(id)initWithSynonym:(id)arg1 category:(short)arg2 identifier:(id)arg3 ;
-(short)category;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

