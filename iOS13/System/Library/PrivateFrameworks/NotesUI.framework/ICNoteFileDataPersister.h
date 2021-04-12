/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/ICDataPersister.h>

@class NSURL;

@interface ICNoteFileDataPersister : NSObject <ICDataPersister> {

	NSURL* _baseURL;

}

@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
-(id)init;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)urlForIdentifier:(id)arg1 ;
-(id)loadDataForIdentifier:(id)arg1 ;
-(BOOL)saveData:(id)arg1 identifier:(id)arg2 ;
-(id)initWithNotePackageURL:(id)arg1 ;
@end

