/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
*/


@protocol FMIPSyncableObject;
@class NSString, NSObject;

@interface FMIPSyncObject : NSObject {

	NSString* _anchor;
	NSObject*<FMIPSyncableObject> _object;
	FMIPSyncObject* _nextObject;

}

@property (nonatomic,retain) NSString * anchor;                                 //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSObject*<FMIPSyncableObject> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) FMIPSyncObject * nextObject;                       //@synthesize nextObject=_nextObject - In the implementation block
-(FMIPSyncObject *)nextObject;
-(NSObject*<FMIPSyncableObject>)object;
-(void)setObject:(NSObject*<FMIPSyncableObject>)arg1 ;
-(id)description;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(id)initWithObject:(id)arg1 nextObject:(id)arg2 ;
-(void)setNextObject:(FMIPSyncObject *)arg1 ;
@end

