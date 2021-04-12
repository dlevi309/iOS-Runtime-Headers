/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, CADObjectID;

@interface CADEntityWrapper : NSObject <NSSecureCoding> {

	int _entityType;
	int _rowID;
	NSArray* _loadedValues;
	CADObjectID* _objectID;
	BOOL _deleted;

}

@property (nonatomic,readonly) BOOL deleted;              //@synthesize deleted=_deleted - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)deleted;
-(id)objectID;
-(id)initWithCalEntity:(void*)arg1 ;
-(id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)loadedValues;
@end

