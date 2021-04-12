/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray;

@interface CNContainerDiff : NSObject {

	NSArray* _updates;

}

@property (nonatomic,retain) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)diffContainer:(id)arg1 to:(id)arg2 ;
-(id)description;
-(NSArray *)updates;
-(void)setUpdates:(NSArray *)arg1 ;
-(id)initWithUpdates:(id)arg1 ;
@end

