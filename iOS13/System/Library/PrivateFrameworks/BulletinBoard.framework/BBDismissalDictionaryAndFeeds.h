/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BBDismissalItem.h>

@class NSString;

@interface BBDismissalDictionaryAndFeeds : BBDismissalItem {

	double _dismissalTimeInterval;
	NSString* _dismissalHash;

}

@property (nonatomic,readonly) double dismissalTimeInterval;               //@synthesize dismissalTimeInterval=_dismissalTimeInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * dismissalHash;              //@synthesize dismissalHash=_dismissalHash - In the implementation block
-(id)description;
-(id)initWithDismissalDictionary:(id)arg1 andFeeds:(unsigned long long)arg2 ;
-(BOOL)matchDismissalDictionary:(id)arg1 ;
-(double)dismissalTimeInterval;
-(NSString *)dismissalHash;
@end

