/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/CRDataType.h>

@class CRSet, NSMapTable, NSString;

@interface CROneOf : NSObject <CRDataType> {

	CRSet* _set;
	NSMapTable* _timestamps;

}

@property (nonatomic,retain) NSMapTable * timestamps;               //@synthesize timestamps=_timestamps - In the implementation block
@property (nonatomic,retain) CRSet * set;                           //@synthesize set=_set - In the implementation block
@property (nonatomic,retain) id contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CRSet *)set;
-(void)setSet:(CRSet *)arg1 ;
-(id)contents;
-(id)tombstone;
-(NSMapTable *)timestamps;
-(void)addItem:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(void)setUpdated:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)setTimestamps:(NSMapTable *)arg1 ;
-(id)timestampForNewItem;
@end

