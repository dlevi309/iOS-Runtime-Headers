/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@class NSFetchRequest;

@interface TBLocalFetchRequestDescriptor : NSObject {

	NSFetchRequest* _fetchRequest;
	NSFetchRequest* _localFetchRequest;

}

@property (nonatomic,retain) NSFetchRequest * localFetchRequest;              //@synthesize localFetchRequest=_localFetchRequest - In the implementation block
@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                 //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(NSFetchRequest *)fetchRequest;
-(id)initWithFetchRequest:(id)arg1 ;
-(NSFetchRequest *)localFetchRequest;
-(void)setLocalFetchRequest:(NSFetchRequest *)arg1 ;
@end

