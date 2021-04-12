/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSError, NSString;

@interface PFCloudKitErrorLogEntry : NSObject {

	NSError* _error;
	NSString* _annotation;

}

@property (nonatomic,readonly) NSString * annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(NSString *)annotation;
-(id)initWithError:(id)arg1 annotation:(id)arg2 ;
@end

