/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_DKObject.h>

@class NSString, _DKObject;

@interface _DKRelation : _DKObject {

	NSString* _verbPhrase;
	_DKObject* _subject;
	_DKObject* _object;

}

@property (readonly) NSString * verbPhrase;              //@synthesize verbPhrase=_verbPhrase - In the implementation block
@property (readonly) _DKObject * subject;                //@synthesize subject=_subject - In the implementation block
@property (readonly) _DKObject * object;                 //@synthesize object=_object - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)relationWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3 ;
-(_DKObject *)subject;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)verbPhrase;
-(_DKObject *)object;
-(id)stringValue;
-(id)initWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

