/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/ICDataPersister.h>

@class NSURL;

@interface ICNoteFileDataPersister : NSObject <ICDataPersister> {

	NSURL* _baseURL;

}

@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
-(NSURL *)baseURL;
-(id)init;
-(id)urlForIdentifier:(id)arg1 ;
-(id)loadDataForIdentifier:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(BOOL)saveData:(id)arg1 identifier:(id)arg2 ;
-(id)initWithNotePackageURL:(id)arg1 ;
@end

