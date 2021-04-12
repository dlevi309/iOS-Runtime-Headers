/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/CMMapperRootArchiver.h>

@class OCDDocument, CMArchiveManager, NSString;

@interface CMMapper : NSObject <CMMapperRootArchiver> {

	CMMapper* mParent;
	CMMapper* mRoot;
	OCDDocument* _document;
	CMArchiveManager* mArchiver;
	NSString* _fileName;

}

@property (__weak,readonly) CMMapper * parent; 
@property (retain) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
@property (readonly) OCDDocument * document; 
-(id)init;
-(CMMapper *)parent;
-(id)initWithParent:(id)arg1 ;
-(id)root;
-(OCDDocument *)document;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(id)archiver;
-(void)addAttribute:(id)arg1 toNode:(id)arg2 value:(id)arg3 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2 ;
-(void)mapWithState:(id)arg1 ;
-(void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2 embedStyle:(BOOL)arg3 ;
-(void)addStyle:(id)arg1 withName:(id)arg2 ;
-(void)mapStylesheetAt:(id)arg1 stylesheet:(id)arg2 ;
-(void)startMappingWithState:(id)arg1 ;
-(void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4 ;
-(void)finishMappingWithState:(id)arg1 ;
@end

