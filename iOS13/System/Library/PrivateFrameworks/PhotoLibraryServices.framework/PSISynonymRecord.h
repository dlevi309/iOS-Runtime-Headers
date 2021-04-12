/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PSISynonymRecord : NSObject {

	short _category;
	NSString* _synonym;

}

@property (nonatomic,copy) NSString * synonym;              //@synthesize synonym=_synonym - In the implementation block
@property (assign,nonatomic) short category;                //@synthesize category=_category - In the implementation block
-(short)category;
-(void)setCategory:(short)arg1 ;
-(id)initWithSynonym:(id)arg1 category:(short)arg2 ;
-(NSString *)synonym;
-(void)setSynonym:(NSString *)arg1 ;
@end

