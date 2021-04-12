/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSArray;

@interface AVTPuppetStore : NSObject {

	NSArray* _puppetRecords;

}

@property (nonatomic,copy) NSArray * puppetRecords;              //@synthesize puppetRecords=_puppetRecords - In the implementation block
+(id)createPuppetRecords;
-(id)initWithEnvironment:(id)arg1 ;
-(void)setPuppetRecords:(NSArray *)arg1 ;
-(NSArray *)puppetRecords;
-(id)avatarPuppetsForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)avatarsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)loadPuppetRecordsIfNeeded;
-(id)allAvatarPuppetsWithError:(id*)arg1 ;
-(id)allAvatarPuppetsExcluding:(id)arg1 error:(id*)arg2 ;
-(id)allPuppetRecords;
@end

