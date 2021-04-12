/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/


#import <CoreDAV/CoreDAV-Structs.h>
@interface CoreDAVXMLData_Impl : NSObject {

	xmlTextWriterRef _writer;
	xmlDoc* _doc;

}

@property (assign) xmlTextWriterRef writer;              //@synthesize writer=_writer - In the implementation block
@property (assign) xmlDoc* doc;                          //@synthesize doc=_doc - In the implementation block
-(xmlDoc*)doc;
-(void)setWriter:(xmlTextWriterRef)arg1 ;
-(xmlTextWriterRef)writer;
-(void)setDoc:(xmlDoc*)arg1 ;
@end

