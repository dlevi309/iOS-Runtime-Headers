/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)objectID;
-(BOOL)deleted;
-(id)loadedValues;
-(id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2 ;
-(id)initWithCalEntity:(void*)arg1 ;
@end

