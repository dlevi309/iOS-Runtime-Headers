/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSArray;

@interface AVTPuppetStore : NSObject {

	NSArray* _puppetRecords;

}

@property (nonatomic,copy) NSArray * puppetRecords;              //@synthesize puppetRecords=_puppetRecords - In the implementation block
+(id)createPuppetRecords;
-(void)setPuppetRecords:(NSArray *)arg1 ;
-(NSArray *)puppetRecords;
-(id)avatarPuppetsForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)avatarsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)loadPuppetRecordsIfNeeded;
-(id)allAvatarPuppetsWithError:(id*)arg1 ;
-(id)allAvatarPuppetsExcluding:(id)arg1 error:(id*)arg2 ;
-(id)allPuppetRecords;
@end

