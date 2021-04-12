/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSManagedObject, NSIndexPath, _NSDefaultSectionInfo;

@interface _PFChangeInfo : NSObject {

	NSManagedObject* _object;
	unsigned long long _changeType;
	NSIndexPath* _startIndexPath;
	NSIndexPath* _finalIndexPath;
	_NSDefaultSectionInfo* _startSectionInfo;
	_NSDefaultSectionInfo* _finalSectionInfo;

}

@property (nonatomic,retain,readonly) NSManagedObject * object;              //@synthesize object=_object - In the implementation block
-(id)initWithObject:(id)arg1 ;
-(NSManagedObject *)object;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

