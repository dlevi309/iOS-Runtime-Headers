/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSXPCInterface;

@interface _NSXPCConnectionExportInfo : NSObject {

	id _exportedObject;
	NSXPCInterface* _exportedInterface;
	long long _exportCount;

}

@property (nonatomic,retain) id exportedObject;                               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (assign,nonatomic) long long exportCount;                           //@synthesize exportCount=_exportCount - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(id)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(long long)exportCount;
-(void)setExportCount:(long long)arg1 ;
@end

