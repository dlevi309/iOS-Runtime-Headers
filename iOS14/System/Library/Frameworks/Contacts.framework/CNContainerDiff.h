/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray;

@interface CNContainerDiff : NSObject {

	NSArray* _updates;

}

@property (nonatomic,retain) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)diffContainer:(id)arg1 to:(id)arg2 ;
-(NSArray *)updates;
-(void)setUpdates:(NSArray *)arg1 ;
-(id)description;
-(id)initWithUpdates:(id)arg1 ;
@end

